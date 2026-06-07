try:
    a,b,c=9,2,2
    def f(a):
        global c
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=8,4,6
    print(f(a),a,b,c)
    
except: print('error')
