/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codexion.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ausmanov <ausmanov@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 23:35:02 by ausmanov          #+#    #+#             */
/*   Updated: 2026/07/14 00:01:30 by ausmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CODEXION_H
# define CODEXION_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

typedef struct s_coder {
    int             id;
    pthread_t       thread;
    int             compile_count;
    long            last_compile_start;
    int             left_dongle;
    int             right_dongle;
    pthread_mutex_t state_mutex;
    struct s_table  *table;
}   t_coder;

typedef struct s_dongle {
    char            *state;
    long            cooldown;
    pthread_mutex_t state_mutex;
}   t_dongle;

#endif CODEXION_H