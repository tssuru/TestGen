try:
    a,b,c=5,0,7
    def h(b):
        a-=1
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,1,2
    print(h(a),a,b,c)
    
except: print('error')
