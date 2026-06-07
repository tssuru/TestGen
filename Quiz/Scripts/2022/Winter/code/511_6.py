try:
    a,b,c=7,1,3
    def g(b):
        global c
        a=4
        b+=1
        c=4
        return a+b+c
    
    a,b,c=8,0,6
    print(g(a),a,b,c)
    
except: print('error')
