try:
    a,b,c=5,3,2
    def f(a):
        a=4
        b+=1
        c=2
        return a+b+c
    
    a,b,c=6,0,9
    print(f(a),a,b,c)
    
except: print('error')
