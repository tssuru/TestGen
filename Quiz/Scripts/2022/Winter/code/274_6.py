try:
    a,b,c=3,0,5
    def f(a):
        global c
        a*=5
        b=5
        c=1
        return a+b+c
    
    a,b,c=0,9,8
    print(f(a),a,b,c)
    
except: print('error')
