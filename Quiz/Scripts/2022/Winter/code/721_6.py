try:
    a,b,c=3,5,1
    def f(b):
        a+=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=2,7,6
    print(f(a),a,b,c)
    
except: print('error')
