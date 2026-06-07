try:
    a,b,c=7,9,8
    def f(b):
        global c
        a*=2
        b=2
        c=3
        return a+b+c
    
    a,b,c=4,0,7
    print(f(a),a,b,c)
    
except: print('error')
