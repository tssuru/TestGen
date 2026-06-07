try:
    a,b,c=6,8,9
    def f(b):
        global c
        a=2
        b-=4
        c=3
        return a+b+c
    
    a,b,c=5,7,4
    print(f(a),a,b,c)
    
except: print('error')
