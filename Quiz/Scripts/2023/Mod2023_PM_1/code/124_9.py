try:
    a,b,c=5,7,3
    def g(a):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,0,8
    print(g(a),a,b,c)
    
except: print('error')
