<?php

	/* Job Class
        A basic wireframe of a job used for comparison and storage of jobs 
        before being manipulated by the database functions.
    */

	 class Job
	 {
		  /* Job Fields */
		  public $job_title;
		  public $job_id;
		  public $job_location;
		  public $job_region;
		  public $job_description;
		  public $job_type;
		  public $job_salary_from;
		  public $job_salary_to;
		  public $job_category;

		  /* @function __construct
			 @ARGS:
				$title -> The title of the job
				$id -> The NAA job id (Currenty a five-digit number
				$location -> The location of the job. 
				$region -> Currently a 4 character alphanumeric code, e.g. WGTN
				$description -> A description of the job - what you would expect really.
				$type -> The type of job - e.g. contract, permanent
				$from_salary -> The from salary range
				$to_salary -> The to salary range
				$category -> The job role - e.g. 'Developer'
		  */
		  public function __construct($title, $jid, $location, $region, $description, $type, $salary_from, $salary_to, $category)
		  {
			$this->job_id = $jid;
			$this->job_title = $title;
			$this->job_location = $location;
			$this->job_region = $region;
			$this->job_description = $description;
			$this->job_type = $type;
			$this->job_salary_from = $salary_from;
			$this->job_salary_to = $salary_to;
			$this->job_category = $category;
		  }
	}

?>
