try:
    a,b,c=9,5,8
    def g(b):
        global c
        a=3
        b+=1
        c=5
        return a+b+c
    
    a,b,c=0,1,7
    print(g(a),a,b,c)
    
except: print('error')
