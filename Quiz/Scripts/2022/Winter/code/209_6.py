try:
    a,b,c=0,9,2
    def h(a):
        a-=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=5,7,4
    print(h(a),a,b,c)
    
except: print('error')
