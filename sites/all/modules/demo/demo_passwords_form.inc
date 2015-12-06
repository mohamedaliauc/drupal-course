<?php
function demo_passwords_form($form,&$form_state)
{
	$form['demo_badpasswords']=array(
			'#type'=>'textfield',
			'#title'=>t('Bad Passwords List'),
			'#default_value'=>variable_get('demo_badpasswords'),
			'#description'=>t('Add list of bad passwords separated by commas.'),
		);
	return system_settings_form($form);
}