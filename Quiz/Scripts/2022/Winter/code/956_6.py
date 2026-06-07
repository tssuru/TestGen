try:
    a,b,c=1,9,2
    def f(a):
        global c
        a=5
        b=2
        c=2
        return a+b+c
    
    a,b,c=8,2,5
    print(f(a),a,b,c)
    
except: print('error')
