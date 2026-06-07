try:
    a,b,c=0,9,7
    def f(a):
        global c
        a*=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=3,8,1
    print(f(a),a,b,c)
    
except: print('error')
