try:
    a,b,c=3,2,5
    def f(a):
        global c
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,8,1
    print(f(a),a,b,c)
    
except: print('error')
