try:
    a,b,c=3,6,5
    def f(a):
        a-=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=4,0,6
    print(f(a),a,b,c)
    
except: print('error')
