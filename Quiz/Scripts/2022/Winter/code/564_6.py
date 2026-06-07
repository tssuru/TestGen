try:
    a,b,c=2,0,6
    def h(b):
        a-=3
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,0,5
    print(h(a),a,b,c)
    
except: print('error')
