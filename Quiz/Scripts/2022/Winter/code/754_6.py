try:
    a,b,c=9,2,7
    def f(a):
        global c
        a=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,3,5
    print(f(a),a,b,c)
    
except: print('error')
