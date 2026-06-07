try:
    a,b,c=3,8,1
    def f(b):
        global c
        a=2
        b-=5
        c=2
        return a+b+c
    
    a,b,c=4,2,9
    print(f(a),a,b,c)
    
except: print('error')
