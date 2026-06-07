try:
    a,b,c=4,9,1
    def f(a):
        global c
        a*=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=0,5,2
    print(f(a),a,b,c)
    
except: print('error')
