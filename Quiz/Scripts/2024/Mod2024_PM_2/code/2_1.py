try:
    a,b,c=9,0,5
    def h(b):
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,3,7
    print(h(a),a,b,c)
    
except: print('error')
