try:
    a,b,c=5,4,1
    def f(a):
        a=5
        b-=3
        c=1
        return a+b+c
    
    a,b,c=3,0,9
    print(f(a),a,b,c)
    
except: print('error')
