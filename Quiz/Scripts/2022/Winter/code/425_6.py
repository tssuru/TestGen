try:
    a,b,c=0,1,3
    def h(a):
        global c
        a*=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=7,1,5
    print(h(a),a,b,c)
    
except: print('error')
