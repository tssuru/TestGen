try:
    a,b,c=0,5,8
    def g(a):
        global c
        a=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,6,0
    print(g(a),a,b,c)
    
except: print('error')
