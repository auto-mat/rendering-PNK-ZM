#!/bin/bash
virtualmaster create rendernow --image 2996 --profile milli --level testing --script ./host_script.sh
virtualmaster destroy rendernow
