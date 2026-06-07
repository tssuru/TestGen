try:
    a,b,c=2,6,3
    def f(b):
        a+=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,5,8
    print(f(a),a,b,c)
    
except: print('error')
