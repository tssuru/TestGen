try:
    a,b,c=6,1,9
    def h(a):
        global c
        a=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=7,8,7
    print(h(a),a,b,c)
    
except: print('error')
