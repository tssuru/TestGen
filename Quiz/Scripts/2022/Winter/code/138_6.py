try:
    a,b,c=7,5,2
    def f(a):
        global c
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,0,9
    print(f(a),a,b,c)
    
except: print('error')
