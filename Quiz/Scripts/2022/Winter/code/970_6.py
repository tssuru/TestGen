try:
    a,b,c=5,9,3
    def f(b):
        global c
        a-=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=2,7,8
    print(f(a),a,b,c)
    
except: print('error')
