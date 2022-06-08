#!/run/current-system/sw/bin/bash -e

MOUNT_DIR=$HOME/mnt/mnk-rendering-aws-s3/

mount_aws_s3_bucket () {
    mkdir -p $MOUNT_DIR
    goofys $AWS_S3_BUCKET_NAME $MOUNT_DIR
}

umount_aws_s3_bucket () {
    if [ "$( findmnt -nt fuse | grep -c $AWS_S3_BUCKET_NAME )" -gt 0 ]; then
        fusermount -u $MOUNT_DIR
    fi
}

source ../Devel/systemdeploy/.env
mount_aws_s3_bucket
echo "Backup start: $(date)"
cp -R /home/$RENDER_USER/data/mnk-rendering-data $MOUNT_DIR
echo -e "Backup end: $(date)\n"
umount_aws_s3_bucket
