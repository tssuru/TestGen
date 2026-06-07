try:
    a,b,c=0,9,6
    def h(a):
        a=1
        b-=5
        c=3
        return a+b+c
    
    a,b,c=5,1,0
    print(h(a),a,b,c)
    
except: print('error')
