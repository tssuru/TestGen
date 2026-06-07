try:
    a,b,c=3,7,1
    def f(a):
        a-=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=9,5,0
    print(f(a),a,b,c)
    
except: print('error')
