try:
    a,b,c=8,9,3
    def f(a):
        global c
        a*=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=6,1,2
    print(f(a),a,b,c)
    
except: print('error')
