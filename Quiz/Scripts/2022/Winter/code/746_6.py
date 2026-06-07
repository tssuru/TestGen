try:
    a,b,c=3,6,2
    def g(b):
        global c
        a+=5
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,5,9
    print(g(a),a,b,c)
    
except: print('error')
