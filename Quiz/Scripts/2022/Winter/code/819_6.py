try:
    a,b,c=1,9,9
    def g(b):
        global c
        a+=1
        b=4
        c=1
        return a+b+c
    
    a,b,c=6,7,3
    print(g(a),a,b,c)
    
except: print('error')
