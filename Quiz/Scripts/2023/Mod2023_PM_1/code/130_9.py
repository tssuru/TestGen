try:
    a,b,c=2,1,6
    def f(a):
        a=4
        b-=1
        c=5
        return a+b+c
    
    a,b,c=3,0,4
    print(f(a),a,b,c)
    
except: print('error')
