try:
    a,b,c=3,5,2
    def f(a):
        global c
        a=5
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,7,3
    print(f(a),a,b,c)
    
except: print('error')
