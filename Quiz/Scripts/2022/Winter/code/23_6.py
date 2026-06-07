try:
    a,b,c=8,0,1
    def h(a):
        a-=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=2,4,5
    print(h(a),a,b,c)
    
except: print('error')
