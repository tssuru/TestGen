try:
    a,b,c=4,8,3
    def f(b):
        global c
        a-=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=5,0,6
    print(f(a),a,b,c)
    
except: print('error')
