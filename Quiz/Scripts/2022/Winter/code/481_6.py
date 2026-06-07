try:
    a,b,c=9,0,3
    def h(b):
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=8,2,6
    print(h(a),a,b,c)
    
except: print('error')
