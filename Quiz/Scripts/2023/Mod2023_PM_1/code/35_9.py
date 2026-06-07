try:
    a,b,c=0,2,8
    def g(a):
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,5,1
    print(g(a),a,b,c)
    
except: print('error')
