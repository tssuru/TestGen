try:
    a,b,c=2,1,9
    def h(a):
        a-=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=7,1,0
    print(h(a),a,b,c)
    
except: print('error')
