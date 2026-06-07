try:
    a,b,c=6,9,1
    def f(a):
        global c
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,3,5
    print(f(a),a,b,c)
    
except: print('error')
