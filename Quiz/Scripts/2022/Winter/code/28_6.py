try:
    a,b,c=0,8,3
    def f(a):
        global c
        a*=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=5,9,6
    print(f(a),a,b,c)
    
except: print('error')
