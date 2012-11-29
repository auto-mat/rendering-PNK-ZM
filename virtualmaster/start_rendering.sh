#!/bin/bash
time virtualmaster create rendernow --image 3006 --profile milli --level testing --script ./host_script.sh
virtualmaster destroy rendernow
