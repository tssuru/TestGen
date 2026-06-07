try:
    a,b,c=8,1,0
    def f(a):
        a=2
        b+=3
        c=4
        return a+b+c
    
    a,b,c=4,2,5
    print(f(a),a,b,c)
    
except: print('error')
