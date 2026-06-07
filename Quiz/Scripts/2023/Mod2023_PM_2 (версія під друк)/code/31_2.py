try:
    a,b,c=5,6,8
    def f(a):
        global c
        a=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=7,9,3
    print(f(a),a,b,c)
    
except: print('error')
