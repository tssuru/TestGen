try:
    a,b,c=6,8,5
    def g(b):
        global c
        a=3
        b+=1
        c=2
        return a+b+c
    
    a,b,c=3,2,7
    print(g(a),a,b,c)
    
except: print('error')
