try:
    a,b,c=9,8,0
    def f(b):
        global c
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=2,6,5
    print(f(a),a,b,c)
    
except: print('error')
