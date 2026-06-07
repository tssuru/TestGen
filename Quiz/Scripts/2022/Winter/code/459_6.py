try:
    a,b,c=2,9,4
    def f(a):
        global c
        a*=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,0,5
    print(f(a),a,b,c)
    
except: print('error')
