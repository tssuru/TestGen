try:
    a,b,c=1,6,9
    def f(a):
        global c
        a-=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=3,7,8
    print(f(a),a,b,c)
    
except: print('error')
