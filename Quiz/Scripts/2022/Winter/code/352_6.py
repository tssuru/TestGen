try:
    a,b,c=5,8,0
    def f(a):
        global c
        a=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=8,9,5
    print(f(a),a,b,c)
    
except: print('error')
