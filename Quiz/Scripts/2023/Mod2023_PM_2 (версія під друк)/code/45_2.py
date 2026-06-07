try:
    a,b,c=2,4,1
    def f(a):
        global c
        a*=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,9,3
    print(f(a),a,b,c)
    
except: print('error')
