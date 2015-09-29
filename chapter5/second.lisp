(set 'var 5)
(defvar  *var 5)

(defun returnStatic () var)
(defun returnDynamic () *var)

(defun static () (let ((var 10)) (returnStatic)))
(defun dynamic () (let ((*var 10)) (returnDynamic)))
